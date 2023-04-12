# unix_shell
Memory management system for processes. Implementing Best Fit, Worst Fit, and First Fit management algorithms.

## Compilation and Usage
gcc $filename.c -o ./$filename
./$filename MAX_MEMORY_SIZE 

## Commands
* **RQ PROCESS_NO MEMORY_REQUEST W/B/F** - 
<img src = "https://user-images.githubusercontent.com/95434969/216759590-b3e42cfe-3c7e-4a3c-b0b5-824535e7b3a1.png" width = "800">

* **RL PROCESS_NO** - release the process memory and set process as deactivated. Automatically merges adjacent empty spaces of free memory while releasing.
<img src = "https://user-images.githubusercontent.com/95434969/216759678-4066e2ee-4898-4323-af8b-9bbad3c03342.png" width = "500">

* **STAT** - State the current Memory Usage by processes and Unallocated memory.
<img src = "https://user-images.githubusercontent.com/95434969/216759755-65198574-1684-415b-9ac8-f8964dfb1011.png" width = "500">

* **C** - Align the processes into one continuous space and make free space at the end.
<img src = "https://user-images.githubusercontent.com/95434969/216759831-042b48e2-e5fb-4251-a8f7-3870bcbb8641.png" width = "500">

### **RESILIANCE** report inconsistent inputs and format cammand efficiently passing multiple spaces and tabs.
<img src = "https://user-images.githubusercontent.com/95434969/216759887-c49f13c9-cb20-4d1b-b3c6-849a9721dd0c.png" width = "500">
