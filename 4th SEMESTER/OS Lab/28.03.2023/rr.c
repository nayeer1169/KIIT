// RR with different arrival time
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    int arrival_time[100];
    int burst_time[100];
    int remaining_time[100];
    int process_id[100];

    for (int i = 0; i < n; i++) {
        printf("Enter arrival time for process %d: ", i + 1);
        scanf("%d", &arrival_time[i]);
        printf("Enter burst time for process %d: ", i + 1);
        scanf("%d", &burst_time[i]);
        process_id[i] = i + 1;
        remaining_time[i] = burst_time[i];
    }
    int time_quantum;
    printf("Enter time quantum: ");
    scanf("%d", &time_quantum);

    int current_time = 0;
    int completed_processes = 0;

    while (completed_processes < n) {
        for (int i = 0; i < n; i++) {
            if (arrival_time[i] <= current_time && remaining_time[i] > 0) {
                int run_time = (remaining_time[i] > time_quantum) ? time_quantum : remaining_time[i];
                current_time += run_time;
                remaining_time[i] -= run_time;
                printf("Process %d ran for %d units. Remaining time: %d\n", process_id[i], run_time, remaining_time[i]);
                if (remaining_time[i] == 0) {
                    completed_processes++;
                }
            }
        }
    }
    return 0;
}