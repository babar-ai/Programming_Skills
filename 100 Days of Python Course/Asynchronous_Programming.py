

# Asynchronous Programming in Python
'''
Asynchronous programming is a programming paradigm that allows tasks to run concurrently, 
making better use of time when waiting for input/output operations like file I/O, database queries, or network requests

'''

# Synchronous vs. Asynchronous

'''
Synchronous: Tasks are executed one at a time, and each task must complete before the next starts.
Asynchronous: Tasks can run independently, and the program can perform other operations while waiting for a task to complete.

Concurrency: Asynchronous programming allows you to run multiple tasks concurrently without blocking execution.
Event Loop: The heart of asynchronous programming. It manages and executes asynchronous tasks.

'''
#key component in Asynchronous Programming

# 1. async Funtion

'''
# coroutines
concept:
The term coroutine comes from the concept of cooperative multitasking, which is a type of multitasking where tasks (or coroutines) voluntarily yield control back to the program or the task scheduler, instead of being preemptively interrupted by the operating system.
In the context of Python and many other programming languages, coroutines are special types of functions that can pause their execution (using the await keyword) and allow other tasks to run concurrently. 
This is different from normal functions that execute from start to finish without interruption

- cooperative behavior
- pausing and resuming behavior
- Functions defined with async def are special in Python because they explicitly define that the function is a coroutine, allowing asynchronous programming using await and asyncio.
'''

import asyncio

# async def greet():                  # Functions defined with async def are coroutines.
#     print('fetching data...')
#     await asyncio.sleep(2)          # await keyword used to pause the excution of async funtion until the awaited task is complete. remember await can be use only inside async funtion
#     print('Data fetched!')
    
# asyncio.run(greet())                 # Event Loop: The event loop is responsible for running asynchronous tasks and handling I/O operations. asyncio.run() starts and manages the event loop.



# # running multiple coroutines concurrently 
# async def task1():
#     print('task1 start.')
#     await asyncio.sleep(2)
#     print('task1 completed.')

# async def task2():
#     print('task2 start')
#     await asyncio.sleep(1)
#     print('task 2 completed')
    
# async def main():
    
#     await asyncio.gather(task1(), task2())
#     print('i am main fun')

# asyncio.run(main()) 


#anther good approch is by using "asyncio.create_task()"
'''
Schedules tasks to run concurrently, but you can choose when to await them. This gives you more fine-grained control over when to check the results or wait for specific tasks.
- asyncio.gather() is used to run multiple coroutines concurrently and wait for all of them to finish before continuing with the next part of the program.
It blocks the main() coroutine until all the coroutines (like task1() and task2()) inside the gather() call have completed.

- It ensures that task1() and task2() are run concurrently and waits for them to finish before printing "I am main fun".
- Unlike asyncio.gather(), asyncio.create_task() doesn’t wait for the tasks to complete immediately. It returns a Task object, which you can use to track or manage the task later (in this case, by awaiting it).
- The tasks run concurrently, but you can choose when to await them (in this case, waiting for both task1 and task2 explicitly).

'''

#Example

async def task1():
    
    print('task1 parsing started.')
    await asyncio.sleep(2)
    print('task1 data is fetched')
    
async def task2():
        print('task2 parsing started.')
        await asyncio.sleep(2)
        print('task2 data is fetched')

async def main():
    # Schedule tasks to run concurrently in the background
    
    task_1_future = asyncio.create_task(task1())
    task_2_future = asyncio.create_task(task2())
    
    #now i have control on task1 and task2 and i can decided where and when i have to await both the task this is the beauty of "asyncio.create_task()"
    
    await task_1_future
    print("now i will decided when to wait for task 2")
    await task_2_future
    print('All tasks are completed.')
    
asyncio.run(main())