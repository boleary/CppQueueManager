#include <iostream>
#include "QueueManager.h"

int main() {
  // Create a queue manager.
  QueueManager manager;

  // Add some jobs to the queue.
  manager.addJob("Hello, world!");
  manager.addJob("This is a message.");
  manager.addJob("Goodbye!");

  // Print the jobs in the queue.
  for (const auto& message : manager.getNextJob()) {
    std::cout << message << std::endl;
  }

  // Remove the jobs from the queue.
  manager.clearQueue();

  // Return 0 to indicate success.
  return 0;
}
