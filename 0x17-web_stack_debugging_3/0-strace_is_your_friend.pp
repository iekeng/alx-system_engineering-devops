# fix LAMP stack 

exec { 'replace_line':
  command => "/bin/sed -i 's/phpp/php/g' ${file_to_edit}",
    }

service { 'apache2':
  ensure => restarted
}
