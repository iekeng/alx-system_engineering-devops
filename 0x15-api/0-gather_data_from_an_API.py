#!/usr/bin/python3
"""Retrieves employee data"""
import requests
import sys


if __name__ == '__main__':
    base_URL = 'https://jsonplaceholder.typicode.com/'
    employee_id = sys.argv[1]
    n = 0

    user_URL = base_URL + 'users/' + employee_id
    todo_URL = base_URL + 'todos/?userId=' + employee_id

    user_response = requests.get(user_URL)
    todo_response = requests.get(todo_URL)

    employee_name = user_response.json().get('name')

    tasks = todo_response.json()
    m = len(tasks)

    for task in tasks:
        if task.get('completed'):
            n = n + 1

    print('Employee {} is done with tasks({}/{}):'
          .format(employee_name, n, m))
    for task in tasks:
        if task.get('completed'):
            print('\t{}'.format(task['title']))
