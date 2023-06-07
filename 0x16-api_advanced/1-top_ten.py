#!/usr/bin/python3
""" Query the Reddit APi.
    Retrieve titles of the first ten posts
"""
import requests


def top_ten(subreddit):
    """ Print top ten hot posts from a subreddit"""
    url = 'https://www.reddit.com/r/{}/hot.json?limit=10'.format(subreddit)
    header = {'User-agent': 'Mozilla/5.0 (X11; Linux x86_64)'}
    try:
        response = requests.get(url, headers=header)
        data = response.json()
        for post in data["data"]["children"]:
            print(post["data"]["title"])
    except BaseException:
        print(None)
