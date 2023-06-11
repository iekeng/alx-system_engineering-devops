# fix missing files in LAMP stack

$root_path = '/var/www/html'
$content = '
<html>
<title>Holberton &#8211; Just another WordPress site</title>
<link rel=\"alternate\" type=\"application/rss+xml\" title=\"Holberton \&raquo; Feed\" href=\"http://127.0.0.1/\?feed=rss2\" />
<link rel=\"alternate\" type=\"application/rss+xml\" title=\"Holberton &raquo; Comments Feed\" href=\"http://127.0.0.1/?feed=comments-rss2\" />
        <div id=\"wp-custom-header\" class=\"wp-custom-header\">
	<img src=\"http://127.0.0.1/wp-content/themes/twentyseventeen/assets/images/header.jpg\" width=\"2000\" height=\"1200\" alt=\"Holberton\" />
	</div>  
	</div>
	<h1 class=\"site-title\">
	<a href=\"http://127.0.0.1/\" rel=\"home\">Holberton</a></h1>
	<p>Yet another bug by a Holberton student</p>
<html>'

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

exec {'fill index.html with content':
  command => "/bin/echo '${content}' > /var/www/html/index.html"
}
