#ifndef QUEUE_MANAGER_H
#define QUEUE_MANAGER_H

#include <vector>
#include <string>


class QueueManager {
 public:
  // Constructor.
  QueueManager();

  // Add a job to the queue.
  void addJob(const std::string& job);

  // Get the number of jobs in the queue.
  size_t getNumJobs() const;

  // Get the next job in the queue.
  std::string getNextJob();

  // Clear the queue.
  void clearQueue();

 private:
  // The queue of jobs.
  std::vector<std::string> jobs_;
};

#endif  // QUEUE_MANAGER_H