#include <stdio.h>
#define SIZE 10
void linearSearch(int arr[], int n, int key);
void binarySearch(int arr[], int n, int key);
void hashSearch(int hashTable[], int key);
int main() {
    int arr[SIZE], hashTable[SIZE];
    int n, key, choice, i;
    for (i = 0; i < SIZE; i++)
        hashTable[i] = -1;

    printf("Enter number of elements (max %d): ", SIZE);
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        int index = arr[i] % SIZE;
        while (hashTable[index] != -1) {
            index = (index + 1) % SIZE;
        }
        hashTable[index] = arr[i];
    }

    do {
        printf("\n---- MENU ----\n");
        printf("1. Linear Search\n");
        printf("2. Binary Search\n");
        printf("3. Hashing Search\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 3) {
            printf("Enter item to search: ");
            scanf("%d", &key);
        }

        switch (choice) {
            case 1:
                linearSearch(arr, n, key);
                break;

            case 2:
                binarySearch(arr, n, key);
                break;

            case 3:
                hashSearch(hashTable, key);
                break;

            case 4:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 4);

    return 0;
}

void linearSearch(int arr[], int n, int key) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Item found at position %d (Linear Search)\n", i + 1);
            return;
        }
    }
    printf("Item not found (Linear Search)\n");
}

void binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1, mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            printf("Item found at position %d (Binary Search)\n", mid + 1);
            return;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    printf("Item not found (Binary Search)\n");
}

void hashSearch(int hashTable[], int key) {
    int index = key % SIZE;
    int start = index;

    while (hashTable[index] != -1) {
        if (hashTable[index] == key) {
            printf("Item found using Hashing at index %d\n", index);
            return;
        }
        index = (index + 1) % SIZE;

        if (index == start)
            break;
    }
    printf("Item not found (Hashing)\n");
}