# Memory Management
Memory management system for processes. Implementing Best Fit, Worst Fit, and First Fit management algorithms.

## Compilation and Usage
```
gcc $filename.c -o ./$filename

./$filename MAX_MEMORY_SIZE 
```
## Commands
* ```RQ PROCESS_NO MEMORY_REQUEST W/B/F```

<img src = "https://user-images.githubusercontent.com/95434969/231601066-17d2dcca-0f80-412b-a9bd-71168fd13d44.png" width = "400">

* ```RL PROCESS_NO``` - Release the process memory. Automatically merges adjacent empty spaces of free memory.
<img src = "https://user-images.githubusercontent.com/95434969/231602035-9ba674d8-73bc-482e-ae9b-f78c6b377175.png" width = "400">

* ```STAT``` - State the current Memory Usage by processes and Unallocated memory.

* ```C``` - Align the processes into one continuous space at the start.
<img src = "https://user-images.githubusercontent.com/95434969/231602744-dade960a-4d5c-4563-8bfb-08a827ddc936.png" width = "400">
