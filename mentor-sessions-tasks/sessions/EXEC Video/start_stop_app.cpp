#include <iostream>
#include <cstdlib>  // For system function
#include <cstring>  // For strcpy and strcat functions
#include <unistd.h> // For sleep function

// Function to start the application
bool startApplication(const std::string& appName) {
    // Replace this with actual code to start your application
    // For example, on Linux, you might use the system function to execute a command
    // Here, we open a new terminal window with a simple echo command as an example
    const char* command = "gnome-terminal -- bash -c 'echo Starting application; exec bash'";
    return system(command) == 0; // Return success or failure
}

// Function to stop the application
bool stopApplication(const std::string& appName) {
    // Replace this with actual code to stop your application
    // For example, on Linux, you might use the system function to execute a command
    // Here, we wait for a few seconds and then close the terminal window
    sleep(5); // Simulating some work
    const char* command = "pkill gnome-terminal";
    return system(command) == 0; // Return success or failure
}

int main() {
    // std::string appName = "YourApplicationName"; "gnome-terminal" 
    std::string appName = "gnome-terminal";

    // Start the application
    if (startApplication(appName)) {
        std::cout << "Application started successfully!" << std::endl;

        // Do some work while the application is running
        // For this example, let's just wait for a few seconds
        sleep(10);

        // Stop the application when done
        if (stopApplication(appName)) {
            std::cout << "Application stopped successfully!" << std::endl;
        } else {
            std::cerr << "Failed to stop the application!" << std::endl;
            return 1; // Return an error code
        }
    } else {
        std::cerr << "Failed to start the application!" << std::endl;
        return 1; // Return an error code
    }

    return 0; // Return success
}
