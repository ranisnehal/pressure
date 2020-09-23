#include<stdio.h>
#include<stdlib.h>
int n;
void insertion(int arr[], int n) {
 int pos, element;
 printf("Enter the position of insertion :- ");
 scanf("%d", & pos);
 printf("Enter the element to be inserted :- ");
 scanf("%d", & element);
 printf("\n");
 if (pos < n) {
 for (int i = n; i >= pos - 1; i--) {
 arr[i + 1] = arr[i];
 }
 arr[pos - 1] = element;
 } else if (pos == n + 1) {
 arr[pos - 1] = element;
 } else {
 printf("Invalid position!\n");
 }
}
void deletion(int arr[], int n) {
 int val, count = n;
 printf("Enter the value to be deleted\n");
 scanf("%d", & val);
 for (int i = 0; i < n; i++) {
 if (arr[i] == val) {
 for (int j = i; j < n; j++) {
 arr[j] = arr[j + 1];
 }
 n--;
 }
 }
 if (count == n) {
 printf("Value not found\n");
 }
}
void update(int arr[], int n) {
 int pos, element;
 printf("Enter the position to update an element\n");
 scanf("%d", & pos);
 if (pos <= n) {
 scanf("Enter the updated value\n");
 scanf("%d", & element);
 arr[pos - 1] = element;
 } else {
 printf("Invalid Input\n");
 }
}
void traversal(int arr[], int n) {
 printf("The array elements are \n");
 for (int i = 0; i < n; i++) {
 printf("%d ", arr[i]);
 }
 printf("\n");
}
void main() {
 int * arr, check = 0, option = 0;
 arr = (int * ) malloc(n * sizeof(int));
 printf("Enter the size of array\n");
 scanf("%d", & n);
 for (int i = 0; i < n; i++) {
 printf("Enter the %d element of the array\n", i + 1);
 scanf("%d", & arr[i]);
 }
 while (check == 0) {
 printf("Select an operation which you want to
perform\n\n");
 printf("\tEnter 1 to add an element in the array\n");
 printf("\tEnter 2 to delete an element in the array\n");
 printf("\tEnter 3 to update an element in the array\n");
 printf("\tEnter 4 to see the elements of the array\n");
 printf("\tEnter 5 to exit\n");
 scanf("%d", & option);
 switch (option) {
 case 1: {
 insertion(arr, n);
 n++;
 break;
 }
 case 2: {
 deletion(arr, n);
 n--;
 break;
 }
 case 3: {
 update(arr, n);
 break;
 }
 case 4: {
 traversal(arr, n);
 break;
 }
 case 5: {
 check++;
 break;
 }
 default:
 printf("\t\tEnter a valid option!\n");
 }
 }
}
