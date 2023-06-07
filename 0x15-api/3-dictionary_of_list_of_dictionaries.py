#!/usr/bin/python3
"""export data to CSV"""
import requests
import sys

if __name__ == '__main__':
    baseUrl = 'https://jsonplaceholder.typicode.com/users'
    employeeId = sys.argv[1]
    url = baseUrl + "/" + employeeId

    response = requests.get(url)
    userName = response.json().get('username')

    todoUrl = url + "/todos"
    response = requests.get(todoUrl)
    tasks = response.json()
    # done = 0
    # done_tasks = []

    for task in tasks:
        print('"{}", "{}", "{}", "{}"\n'.format(employeeId, userName, task.completed , task.title))
        # if task.get('completed'):
        #     done_tasks.append(task)
        #     done += 1

    # print("Employee {} is done with tasks({}/{}):"
    #       .format(employeeName, done, len(tasks)))

    # for task in done_tasks:
    #     print("\t {}".format(task.get('title')))


