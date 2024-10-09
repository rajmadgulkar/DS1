#include<stdio.h>
#include<stdlib.h>
struct treeNode{
    int data;
    struct treeNode *left;
    struct treeNode *right;
};
struct treeNode* createNode(int level){
    level+=1;
    struct treeNode *newNode=(struct treeNode*)malloc(sizeof(struct treeNode));
    printf("Enter data:");
    scanf("%d",&newNode->data);

    char ch;
    getchar();
    printf("Want to create a left subtree for level %d??",level);
    scanf("%c",&ch);

    if(ch=='y'||ch=='Y'){
        newNode->left=createNode(level);
    }else{
        newNode->left=NULL;
    }

    
    getchar();
    printf("Want to create a right subtree for level %d??",level);
    scanf("%c",&ch);

    if(ch=='y'||ch=='Y'){
        newNode->right=createNode(level);
    }else{
        newNode->right=NULL;
    }
    return newNode;

}

int main(){
    printf("Creating a Binary Tree...\n");
    struct treeNode *root=(struct treeNode*)malloc(sizeof(struct treeNode));
    printf("Enter data:");
    scanf("%d",root->data);
    printf("\t\tTree rooted with data: %d\n",root->data);

    /*char ch;
    getchar();
    printf("Want to create a left subtree??");
    scanf("%c",&ch);

    if(ch=='y'||ch=='Y'){
        root->left=createNode(0);
    }else{
        root->left=NULL;
    }
    */

    char ch;
    getchar();
    printf("Want to create a right subtree??");
    scanf("%c",&ch);

    if(ch=='y'||ch=='Y'){
        root->right=createNode(0);
    }else{
        root->right=NULL;
    }
    //printTree(root);
    return 0;
}