#include <stdio.h>
#include <string.h>

#define SIZE 10

typedef struct {
    int char_count;
    char state_name[20];
} State;

void print_states(const State *states, int size) {
    printf("States List:\n");
    for (int i = 0; i < size; i++) {
        printf("%s (%d characters)\n", states[i].state_name, states[i].char_count);
    }
    printf("\n");
}

void sort_states(State *states, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if ((states + j)->char_count > (states + j + 1)->char_count) {
                State temp = *(states + j);
                *(states + j) = *(states + j + 1);
                *(states + j + 1) = temp;
            }
        }
    }
}

int search_states(const State *states, int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if ((states + mid)->char_count == target) {
            return mid;
        } else if ((states + mid)->char_count < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    State states[SIZE] = {
        {8, "Kentucky"},
        {7, "Indiana"},
        {4, "Ohio"},
        {5, "Texas"},
        {7, "Alabama"},
        {7, "Arizona"},
        {8, "Michigan"},
        {8, "Illinois"},
        {7, "Georgia"},
        {6, "Oregon"}
    };

    printf("Before Sorting:\n");
    print_states(states, SIZE);

    sort_states(states, SIZE);

    printf("After Sorting:\n");
    print_states(states, SIZE);

    int target = 7;
    int index = search_states(states, SIZE, target);

    if (index != -1) {
        printf("Found state with %d characters: %s\n", target, states[index].state_name);
    } else {
        printf("No state found with %d characters.\n", target);
    }

}