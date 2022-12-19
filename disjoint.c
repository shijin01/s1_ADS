#include <stdio.h>
#include <stdlib.h>

typedef struct disjoint_set
{
    int *rank;
    int *parent;
    int n;
} disjoint_set;

disjoint_set *create_disjoint_set(int n)
{
    disjoint_set *new_disjoint_set_1 = (disjoint_set *)malloc(sizeof(disjoint_set));
    new_disjoint_set_1->rank = (int *)malloc(sizeof(int) * n);
    new_disjoint_set_1->parent = (int *)malloc(sizeof(int) * n);
    new_disjoint_set_1->n = n;
    for (int i = 0; i < n; i++)
        new_disjoint_set_1->parent[i] = i;

    return new_disjoint_set_1;
}

int disjoint_set_find(const disjoint_set *disjoint_set_1, int element)
{

    if (disjoint_set_1->parent[element] != element)

        disjoint_set_1->parent[element] = disjoint_set_find(disjoint_set_1, disjoint_set_1->parent[element]);

    return disjoint_set_1->parent[element];
}

void disjoint_set_union(const disjoint_set *disjoint_set_1, int x, int y)
{
    int xset = disjoint_set_find(disjoint_set_1, x);
    int yset = disjoint_set_find(disjoint_set_1, y);

    if (xset == yset)
        return;
    if (disjoint_set_1->rank[xset] < disjoint_set_1->rank[yset])
    {
        disjoint_set_1->parent[xset] = yset;
    }
    else if (disjoint_set_1->rank[xset] > disjoint_set_1->rank[yset])
    {
        disjoint_set_1->parent[yset] = xset;
    }
    else
    {
        disjoint_set_1->parent[yset] = xset;
        disjoint_set_1->rank[xset] = disjoint_set_1->rank[xset] + 1;
    }
}

int main()
{

    disjoint_set *ds1 = create_disjoint_set(5);
    disjoint_set_union(ds1, 0, 2);
    disjoint_set_union(ds1, 4, 2);
    disjoint_set_union(ds1, 3, 1);

    if (disjoint_set_find(ds1, 4) == disjoint_set_find(ds1, 0))
        printf("Yes\n");
    else
        printf("No\n");
    if (disjoint_set_find(ds1, 1) == disjoint_set_find(ds1, 0))
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
