# Fix apache server

$root_path = '/var/www/html'
$file_list = [
      {path => '${root_path}/index.html'},
  {path => '${root_path}/index.cgi'},
  {path => '${root_path}/index.pl'},
  {path => '${root_path}/.maintenance'},
  {path => '${root_path}/wp-content/languages'},
  {path => '${root_path}/wp-includes/languages'},
  {path => '${root_path}/wp-content/db.php'},
  {path => '${root_path}/wp-content/object-cache.php'},
  {path => '${root_path}/wp-includes/class-wp-locale.phpp'},]

  $file_list.each |$file| {
    file { $file['path']:
           ensure => present,
    }
  }
