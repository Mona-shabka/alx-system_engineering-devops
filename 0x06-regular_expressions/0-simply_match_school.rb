#!/usr/bin/env ruby
# A Ruby script that accepts one argument and pass it to a regular expression matching method
# A regular expression that is simply matching School
puts ARGV[0].scan(/School/).join
