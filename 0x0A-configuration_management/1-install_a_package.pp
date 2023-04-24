# Install flask

package {'flask':
name    => 'flask',
ensure  => 'install',
command => '/usr/bin/pip3 install flask==2.1.0',
}
