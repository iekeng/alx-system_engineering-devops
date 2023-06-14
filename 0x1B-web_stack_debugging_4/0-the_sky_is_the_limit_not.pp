# led requests to nginx

exec {'nginx fix':
  provider => shell,
  command  => "sed 's/4096/15/g' /etc/default/nginx",
}

exec {'nginx restart':
  provider => shell,
  command  => 'service nginx restart'
}
