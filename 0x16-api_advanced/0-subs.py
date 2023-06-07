#!/usr/bin/python3
""" Query the Reddit APi.
    Retrieve titles of the first ten posts
# """
import requests


def number_of_subscribers(subreddit):
    """ collect subreddit data """
    url = 'https://www.reddit.com/r/{}.json'.format(subreddit)
    header = {'User-agent': 'Mozilla/5.0 (X11; Linux x86_64)'}
    num_subs = 0
    try:
        response = requests.get(url, headers=header)
        data = response.json()
        num_subs = data['data']['children'][0]['data']['subreddit_subscribers']
        return num_subs
    except BaseException:
        return num_subs
