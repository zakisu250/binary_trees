#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/* Binary tree print */
void binary_tree_print(const binary_tree_t *);

/* Binary Search Tree */
typedef struct binary_tree_s bst_t;

/* AVL Tree */
typedef struct binary_tree_s avl_t;

/* Max Binary Heap */
typedef struct binary_tree_s heap_t;

/* Function Prototypes */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);
int binary_tree_is_root(const binary_tree_t *node);
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_depth(const binary_tree_t *tree);
size_t binary_tree_size(const binary_tree_t *tree);
size_t binary_tree_leaves(const binary_tree_t *tree);
size_t binary_tree_nodes(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree);
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

/* Advanced tasks */
binary_tree_t *binary_trees_ancestor(const binary_tree_t
*first, const binary_tree_t *second);
/*task 20*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));
/*task 21*/
int binary_tree_is_complete(const binary_tree_t *tree);
/*task 22*/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);
/*task 23*/
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);
/*special BST-Binary Search Tree*/
/*task 24*/
int binary_tree_is_bst(const binary_tree_t *tree);
/*task 25*/
bst_t *bst_insert(bst_t **tree, int value);
/*task 26*/
bst_t *array_to_bst(int *array, size_t size);
/*task 27*/
bst_t *bst_search(const bst_t *tree, int value);
/*task 28*/
bst_t *bst_remove(bst_t *root, int value);
/*task 29*/
/*File Big O #BST*/
/*special AVL*/
/*task 30*/
int binary_tree_is_avl(const binary_tree_t *tree);
/*task 31*/
avl_t *avl_insert(avl_t **tree, int value);
/*task 32*/
avl_t *array_to_avl(int *array, size_t size);
/*task 33*/
avl_t *avl_remove(avl_t *root, int value);
/*task 34*/
avl_t *sorted_array_to_avl(int *array, size_t size);
/*task 35*/
/*File Big O #AVL*/
/*special HEAP*/
/*task 36*/
int binary_tree_is_heap(const binary_tree_t *tree);
/*task 37*/
heap_t *heap_insert(heap_t **root, int value);
/*task 38*/
heap_t *array_to_heap(int *array, size_t size);
/*task 39*/
int heap_extract(heap_t **root);
/*task 40*/
int *heap_to_sorted_array(heap_t *heap, size_t *size);
/*task 41*/
/*File Big O #BinaryHeap*/

/*some helper functions*/
avl_t *rebalance(avl_t *node, avl_t **tree);
avl_t *balance_left(avl_t *node);
avl_t *balance_right(avl_t *node);
char *convert(unsigned long int num, int base, int lowercase);
bst_t *swap(bst_t *a, bst_t *b);


#endif /* BINARY_TREE_H  */
