# create a file and set permissions using Puppet

file {'/tmp/school':
mode    => '0744',
content => 'I love Puppet',
owner   => 'www-data',
group   => 'www-data'
}
