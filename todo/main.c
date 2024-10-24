#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char *task; //a pointer to a string (a dynamic array of characters) that will hold the text of the task
    int completed; //1 -true, 0 -false
} Task;


/* 
    Task is a data type that you created using typedef struct. 
    It's like a blueprint or template for creating individual tasks.

    tasks is a pointer to an array of Task structures

    task is a pointer to an array of Task structures.

    Think of it like this:

    Task (capital T): Blueprint for a task (the type).
    task (lowercase): Actual name of a specific task (like "Do laundry").
    tasks: A list of all tasks (where each task has a name and a status). 

*/

Task *tasks = NULL;
//This is a pointer to an array of tasks. Initially, it's set to NULL, 
//meaning no memory is allocated yet.
int length = 0;


void addTask(const char *task)
{
    tasks = (Task *)realloc(tasks, (length +1) * sizeof(Task));
    tasks[length].task = (char *)malloc(strlen(task) + 1);
    tasks[length].completed = 0;

    strcpy(tasks[length].task, tasks);

    length++;
    printf("task added");
}

void listTask()
{
    char status;

    for(int i = 0; i < length; i++)
    {
        if(tasks[i].completed == 1)
        {
            status = 'd';
        }
        else {
            status ='n';
        }

        printf("%d. %s [%c]\n", i + 1, tasks[i].task, status);
    }
}

void markCompletes()
{}

void deleteTask()
{}

void editTask()
{}




int main()
{
    return 0;
}
