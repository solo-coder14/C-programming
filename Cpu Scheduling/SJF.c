#include <stdio.h>
#include <stdbool.h>

struct Process {
    int id;
    float arrival; // Arrival time
    float burst;   // Burst time
    float waiting; // Waiting time
    float turnaround; // Turnaround time
    bool completed; // Track if process is completed
};

// Function to find the next shortest job that has arrived
int find_next_process(struct Process proc[], int n, float current_time) {
    int shortest = -1;
    float min_burst = 1e9; // Large value
    
    for (int i = 0; i < n; i++) {
        if (!proc[i].completed && proc[i].arrival <= current_time) {
            if (proc[i].burst < min_burst) {
                min_burst = proc[i].burst;
                shortest = i;
            }
        }
    }
    return shortest;
}

// Function to calculate waiting time and turnaround time
void calculate_times(struct Process proc[], int n) {
    float total_waiting_time = 0, total_turnaround_time = 0;
    float current_time = 0;
    int completed = 0;

    while (completed < n) {
        int index = find_next_process(proc, n, current_time);
        
        if (index == -1) {
            // If no process has arrived, move time forward
            current_time += 0.1;
            continue;
        }

        // Process execution
        proc[index].waiting = current_time - proc[index].arrival;
        proc[index].turnaround = proc[index].waiting + proc[index].burst;
        current_time += proc[index].burst;
        proc[index].completed = true;
        completed++;

        total_waiting_time += proc[index].waiting;
        total_turnaround_time += proc[index].turnaround;
    }
    
    printf("\nProcess\tAT\tBT\tWT\tTAT\n");
    for (int i = 0; i < n; i++) {
        printf("P%d\t%.2f\t%.2f\t%.2f\t%.2f\n", proc[i].id, proc[i].arrival, proc[i].burst, proc[i].waiting, proc[i].turnaround);
    }
    
    printf("\nAverage Waiting Time: %.2f\n", total_waiting_time / n);
    printf("Average Turnaround Time: %.2f\n", total_turnaround_time / n);
}

int main() {
    int n;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    
    struct Process proc[n];
    
    printf("Enter Arrival Time and Burst Time for each process:\n");
    for (int i = 0; i < n; i++) {
        proc[i].id = i + 1;
        proc[i].completed = false;
        printf("P%d Arrival Time: ", i + 1);
        scanf("%f", &proc[i].arrival);
        printf("P%d Burst Time: ", i + 1);
        scanf("%f", &proc[i].burst);
    }
    
    calculate_times(proc, n);
    
    return 0;
}
