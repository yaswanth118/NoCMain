#ifndef QUEUE_HPP
#define QUEUE_HPP

#include <iostream>
#include <queue>

class c_Packet;

class c_Queue {
public:
    // Adds an element to the back of the queue
    void push(c_Packet* value) {
        m_queue.push(value);
    }

    // Removes the element at the front of the queue
    void pop() {
        if (!m_queue.empty()) {
            m_queue.pop();
        }
    }

    // Prints the contents of the queue
    void PrintQueue() {
        std::queue<c_Packet*> temp_queue = m_queue;
        std::cout << "Queue Contents: ";

        while (!temp_queue.empty()) {
//         TODO   std::cout << temp_queue.front() << " ";
            temp_queue.pop();
        }

        std::cout << std::endl;
    }

    // Returns the number of elements in the queue
    int size() {
        return m_queue.size();
    }

    // Returns whether the queue is empty or not
    bool empty() {
        return m_queue.empty();
    }

private:
    std::queue<c_Packet*> m_queue;
};

#endif  // QUEUE_HPP
