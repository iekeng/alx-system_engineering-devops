# change os configuration to enable `holberton` user login

exec {'limits.conf':
  provider => shell,
  command => "sed -i 's/5/4096/g; s/4/4096/g' /etc/security/limits.conf"
}

exec {'apply_config':
  provider => shell,
  command => 'sysctl -p'
}
