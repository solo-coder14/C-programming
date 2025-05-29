#include <stdio.h>

struct Process {
    int pid;       // Process ID
    float arrival; // Arrival time (changed to float)
    float burst;   // Burst time (changed to float)
    float waiting; // Waiting time
    float turnaround; // Turnaround time
};

void calculateTimes(struct Process processes[], int n) {
    float completionTime[n];
    float totalWaiting = 0, totalTurnaround = 0;

    // Calculate completion time for each process
    completionTime[0] = processes[0].arrival + processes[0].burst;
    for (int i = 1; i < n; i++) {
        if (completionTime[i - 1] < processes[i].arrival) {
            completionTime[i] = processes[i].arrival + processes[i].burst;
        } else {
            completionTime[i] = completionTime[i - 1] + processes[i].burst;
        }
    }

    // Calculate waiting time and turnaround time
    for (int i = 0; i < n; i++) {
        processes[i].turnaround = completionTime[i] - processes[i].arrival;
        processes[i].waiting = processes[i].turnaround - processes[i].burst;

        totalWaiting += processes[i].waiting;
        totalTurnaround += processes[i].turnaround;
    }

    // Display the results
    printf("\nProcess\tArrival\tBurst\tWaiting\tTurnaround\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%.2f\t%.2f\t%.2f\t%.2f\n", processes[i].pid, processes[i].arrival, processes[i].burst, processes[i].waiting, processes[i].turnaround);
    }

    // Display average waiting and turnaround times
    printf("\nAverage Waiting Time: %.2f\n", totalWaiting / n);
    printf("Average Turnaround Time: %.2f\n", totalTurnaround / n);
}

int main() {
    int n;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    struct Process processes[n];

    // Input process details
    for (int i = 0; i < n; i++) {
        printf("Enter arrival time and burst time for process %d: ", i + 1);
        processes[i].pid = i + 1;
        scanf("%f %f", &processes[i].arrival, &processes[i].burst);
    }

    // Sort processes by arrival time
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (processes[j].arrival > processes[j + 1].arrival) {
                struct Process temp = processes[j];
                processes[j] = processes[j + 1];
                processes[j + 1] = temp;
            }
        }
    }

    calculateTimes(processes, n);

    return 0;
}
