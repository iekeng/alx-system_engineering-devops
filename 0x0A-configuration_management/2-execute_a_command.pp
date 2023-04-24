# kill a process using exec type

exec {'kill killmenow':
command => 'usr/bin/pkill -f killmenow'
}
