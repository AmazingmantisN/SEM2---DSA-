#include <stdio.h>

int main() {
    int students[10] = {101, 102, 103, 105, 106, 107}; 
    int current_size = 6;
    int i, newItem, searchItem, found = 0;

    printf("Original array: ");
    for(i = 0; i < current_size; i++) {
        printf("%d ", students[i]);
    }
    printf("\n");

    newItem = 104;
    int middleIndex = 3;
    
    for(i = current_size; i > middleIndex; i--) {
        students[i] = students[i-1];
    }
    students[middleIndex] = newItem;
    current_size++;

    printf("After Insertion: ");
    for(i = 0; i < current_size; i++) {
        printf("%d ", students[i]);
    }
    printf("\n");

    int deleteIndex = 4;
    for(i = deleteIndex; i < current_size - 1; i++) {
        students[i] = students[i+1];
    }
    current_size--;

    printf("After Deletion:  ");
    for(i = 0; i < current_size; i++) {
        printf("%d ", students[i]);
    }
    printf("\n");

    printf("Enter Register No to search: ");
    scanf("%d", &searchItem);

    for(i = 0; i < current_size; i++) {
        if(students[i] == searchItem) {
            printf("Student found at position: %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("Student not found.\n");
    }

    return 0;
}