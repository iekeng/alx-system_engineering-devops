# led requests to nginx

exec {'nginx fix':
  provider => shell,
  command  => "sed 's/15/4096/g' /etc/default/nginx",
}

exec {'nginx restart':
  provider => shell,
  command  => 'service nginx restart'
}
