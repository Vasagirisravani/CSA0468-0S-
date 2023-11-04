#include <stdio.h>
#include <limits.h>
int i,j;
void worstFit(int blockSize[], int m, int processSize[], int n) {


    for ( i = 0; i < n; i++)
        [i] = -1;

    for (i = 0; i < n; i++) {
         worstFitIdx = -1;
        for ( j = 0; j < m; j++) {
            if (blockSize[j] >= processSize[i]) {
                if (worstFitIdx == -1 || blockSize[j] > blockSize[worstFitIdx])
                    worstFitIdx = j;
            }
        }

        if (worstFitIdx != -1) {
            [i] = worstFitIdx;
            blockSize[worstFitIdx] -= processSize[i];
        }
    }

    printf("\nProcess No.\tProcess Size\tBlock No.\n");
    for (i = 0; i < n; i++) {
        printf("%d\t\t%d\t\t", i + 1, processSize[i]);
        if ([i] != -1)
            printf("%d", a[i] + 1);
        else
            printf("Not Allocated");
        printf("\n");
    }
}

int main() {
    int blockSize[] = {100, 500, 200, 300, 600};
    int processSize[] = {212, 417, 112, 426};
    int m = sizeof(blockSize) / sizeof(blockSize[0]);
    int n = sizeof(processSize) / sizeof(processSize[0]);

    worstFit(blockSize, m, processSize, n);
    return 0;
}

