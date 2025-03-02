 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#if defined(_WIN32) || defined(_WIN64)
#include <windows.h>
#define DESKTOP_ENV "USERPROFILE"  // Windows environment variable
#define PATH_SEPARATOR "\\"
#else
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#define DESKTOP_ENV "HOME"         // Linux/Unix environment variable
#define PATH_SEPARATOR "/"
#endif

int main() {
    char path[260];  // Adjust size if needed
    const char *homeDir = getenv(DESKTOP_ENV);
    
    if (!homeDir) {
        fprintf(stderr, "Error: Could not get desktop path.\n");
        return 1;
    }
    
    // Construct path to the desktop
#if defined(_WIN32) || defined(_WIN64)
    snprintf(path, sizeof(path), "%s\\Desktop\\MyNewFolder", homeDir);
#else
    snprintf(path, sizeof(path), "%s/Desktop/MyNewFolder", homeDir);
#endif

    // Create the directory
#if defined(_WIN32) || defined(_WIN64)
    if (CreateDirectory(path, NULL) || GetLastError() == ERROR_ALREADY_EXISTS) {
        printf("Folder created successfully at: %s\n", path);
    } else {
        fprintf(stderr, "Error creating folder. Error code: %lu\n", GetLastError());
    }
#else
    if (mkdir(path, 0755) == 0 || errno == EEXIST) {
        printf("Folder created successfully at: %s\n", path);
    } else {
        perror("Error creating folder");
    }
#endif

    return 0;
}
