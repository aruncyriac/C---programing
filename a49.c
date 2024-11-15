#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef union {
    int intVal;
    char charVal;
    float floatVal;
    double doubleVal;
} Data;

typedef struct {
    Data data;
    int type; // 1: int, 2: char, 3: float, 4: double
    int isOccupied;
} MemorySlot;

#define MAX_SLOTS 8

void addElement(MemorySlot *memory) {
    int typeChoice;
    for (int i = 0; i < MAX_SLOTS; i++) {
        if (!memory[i].isOccupied) {
            printf("Enter the type you have to insert:\n1. int\n2. char\n3. float\n4. double\nChoice ---> ");
            scanf("%d", &typeChoice);

            if (typeChoice < 1 || typeChoice > 4) {
                printf("Invalid type choice.\n");
                return;
            }

            memory[i].type = typeChoice;
            memory[i].isOccupied = 1;

            switch (typeChoice) {
                case 1:
                    printf("Enter the int: ");
                    scanf("%d", &memory[i].data.intVal);
                    break;
                case 2:
                    printf("Enter the char: ");
                    scanf(" %c", &memory[i].data.charVal);
                    break;
                case 3:
                    printf("Enter the float: ");
                    scanf("%f", &memory[i].data.floatVal);
                    break;
                case 4:
                    printf("Enter the double: ");
                    scanf("%lf", &memory[i].data.doubleVal);
                    break;
            }
            printf("Element added at index %d.\n", i);
            return;
        }
    }
    printf("No free slot available.\n");
}

void removeElement(MemorySlot *memory) {
    int index;
    printf("Enter the index value to be deleted: ");
    scanf("%d", &index);

    if (index >= 0 && index < MAX_SLOTS && memory[index].isOccupied) {
        memory[index].isOccupied = 0;
        printf("Index %d successfully deleted.\n", index);
    } else {
        printf("Invalid index or index not occupied.\n");
    }
}

void displayElements(MemorySlot *memory) {
    printf("-------------------------\n");
    for (int i = 0; i < MAX_SLOTS; i++) {
        if (memory[i].isOccupied) {
            printf("%d -> ", i);
            switch (memory[i].type) {
                case 1:
                    printf("%d (int)\n", memory[i].data.intVal);
                    break;
                case 2:
                    printf("%c (char)\n", memory[i].data.charVal);
                    break;
                case 3:
                    printf("%f (float)\n", memory[i].data.floatVal);
                    break;
                case 4:
                    printf("%lf (double)\n", memory[i].data.doubleVal);
                    break;
            }
        }
    }
    printf("-------------------------\n");
}

int main() {
    MemorySlot memory[MAX_SLOTS] = {0};
    int choice;

    do {
        printf("Menu:\n");
        printf("1. Add element\n");
        printf("2. Remove element\n");
        printf("3. Display element\n");
        printf("4. Exit from the program\n");
        printf("Choice ---> ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addElement(memory);
                break;
            case 2:
                removeElement(memory);
                break;
            case 3:
                displayElements(memory);
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
