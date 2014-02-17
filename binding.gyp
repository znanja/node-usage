{
	'targets': [
		{
			'target_name': 'sysinfo',
			'conditions': [
				['OS=="solaris"', {
					'include_dirs': [
						'<!(node -e "require(\'nan\')")'
					],
					'sources': [
						'src/solaris.cpp'
					]
				}]
			],
			'sources': [
				'src/binding.cpp',
			],
			'linkflags': [
				'-Lbuild/cd Release/obj.target/sysinfo/src/'
			],
			'defines': [
				'OS="<(OS)"',
				'is_<(OS)'
			],
		}
	]
}