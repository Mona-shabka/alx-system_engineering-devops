#!/usr/bin/env ruby
# A Ruby script that accepts one argument and pass it to a regular expression matching method
# A regular expression that is matches a given pattern
puts ARGV[0].scan(/hb?tn/).join
