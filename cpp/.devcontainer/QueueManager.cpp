#include "QueueManager.h"

class QueueManager {
 public:
  // Constructor.
  QueueManager() {}

  // Add a job to the queue.
  void addJob(const std::string& job) {
    jobs_.push_back(job);
  }

  // Get the number of jobs in the queue.
  size_t getNumJobs() const {
    return jobs_.size();
  }

  // Get the next job in the queue.
  std::string getNextJob() {
    std::string job = jobs_.front();
    jobs_.erase(jobs_.begin());
    return job;
  }

  // Clear the queue.
  void clearQueue() {
    jobs_.clear();
  }

 private:
  // The queue of jobs.
  std::vector<std::string> jobs_;
};