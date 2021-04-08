project('rgb2cmyk', 'cpp', default_options : ['cpp_std=c++17'])

wx_dep = dependency(
	'wxwidgets',
	version : '>=3.0.3',
	modules : ['std']
)

inc = include_directories(['src'])

executable(
	'rgb2cmyk',
	[
		'src/gui.cpp',
		'src/app.cpp',
		'src/main.cpp',
	],
	dependencies : [wx_dep],
	include_directories : inc,
	install : true
)

install_data(
	'resources/rgb2cmyk.desktop',
	install_dir: 'share/applications'
)
install_data(
	'resources/rgb2cmyk.svg',
	install_dir: 'share/icons/hicolor/scalable/apps'
)
