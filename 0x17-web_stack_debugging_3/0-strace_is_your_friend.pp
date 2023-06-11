# fix LAMP stack 

exec { 'replace_line':
  command => "/bin/sed -i 's/phpp/php/g' /var/www/html/wp-settings.php",
    }

service { 'apache2':
  ensure => restarted
}
