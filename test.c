#include <stdio.h> 
 
struct Process { 
    int id, at, bt, wt, tat; 
}; 
 
void findFCFS(struct Process p[], int n) { 
    int time = 0; 
    float totalWaitingTime = 0, totalTurnaroundTime = 0; 
 
    for (int i = 0; i < n - 1; i++) { 
        for (int j = 0; j < n - i - 1; j++) { 
            if (p[j].at > p[j + 1].at) { 
                struct Process temp = p[j]; 
                p[j] = p[j + 1]; 
                p[j + 1] = temp; 
            } 
        } 
    } 
 
    for (int i = 0; i < n; i++) { 
        if (time < p[i].at) 
            time = p[i].at; 
 
        p[i].wt = time - p[i].at; 
        totalWaitingTime += p[i].wt; 
        p[i].tat = p[i].wt + p[i].bt; 
        totalTurnaroundTime += p[i].tat; 
        time += p[i].bt; 
    } 
 
    printf("\nProcess ID | Arrival Time | Burst Time | Waiting Time | Turnaround Time\n"); 
    for (int i = 0; i < n; i++) { 
        printf("%9d | %12d | %10d | %12d | %15d\n",  
              p[i].id, p[i].at, p[i].bt, p[i].wt, p[i].tat); 
    } 
 
    printf("\nAverage Waiting Time = %.2f\n", totalWaitingTime / n); 
    printf("Average Turnaround Time = %.2f\n", totalTurnaroundTime / n); 
} 
 
int main() { 
    int n; 
    printf("Enter number of processes: "); 
    scanf("%d", &n); 
    struct Process p[n]; 
 
    for (int i = 0; i < n; i++) { 
        printf("Enter Details of Process %d\n", i + 1);
        p[i].id = i + 1; 
        printf("Arrival Time: "); 
        scanf("%d", &p[i].at); 
        printf("Burst Time: "); 
        scanf("%d", &p[i].bt); 
    } 
    findFCFS(p, n); 
    return 0; 
} 