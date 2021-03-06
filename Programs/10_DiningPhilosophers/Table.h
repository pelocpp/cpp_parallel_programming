// ===========================================================================
// class Table
// ===========================================================================

#pragma once

constexpr size_t NumPhilosophers{ 5 }; // number of dining philosophers

class Table {
private:
    std::array<bool, NumPhilosophers> m_forks;
    std::mutex m_mutex;
    std::condition_variable m_condition;

public:
    // c'tor
    Table();

    // public interface
    void demandForks(size_t seat);
    void releaseForks(size_t seat);

private:
    // private helper methods / operators
    std::string forksToString() const;
    bool& operator[] (size_t index);
};

// ===========================================================================
// End-of-File
// ===========================================================================
