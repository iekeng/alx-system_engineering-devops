# fix LAMP stack 

exec { 'replace_line':
  provider => shell,
  command  => "sed -i 's/phpp/php/g' var/www/html/wp-settings.php",
}

service { 'apache2':
  ensure  => 'running',
  restart => 'true',
}
