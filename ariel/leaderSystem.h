#ifndef LEADERSYSTEM_H
    #define LEADERSYSTEM_H

    #define LEADER_SIZE 10
    #define MAX_LENGTH 16

    typedef struct{
        char name[MAX_LENGTH];
        int score;
    } Leader;



    //------------------------------------------------------------------------------------------
    // Leader methods
    //------------------------------------------------------------------------------------------
    Leader* readLeader();


    void writeLeader(Leader *leaderboard);

    int addLeader(Leader* leaderboard, char* name, int score);

    void printLeader(Leader *leaderboard);

    int minLeader(Leader *leaderboard);

#endif