# fix missing files in LAMP stack

$root_path = '/var/www/html'

file {"${root_path}/index.html":
  ensure => present,
}

file {"${root_path}/index.cgi":
  ensure => present,
}

file {"${root_path}/index.pl":
  ensure => present,
}

file {"${root_path}/.maintenance":
  ensure => present,
}

file {"${root_path}/wp-content/languages":
  ensure => present,
}

file {"${root_path}/wp-content/db.php":
  ensure => present,
}

file {"${root_path}/wp-content/object-cache.php":
  ensure => present,
}

file {"${root_path}/wp-includes/class-wp-locale.phpp":
  ensure => present,
}

file {"${root_path}/wp-includes/languages":
  ensure => present,
}
