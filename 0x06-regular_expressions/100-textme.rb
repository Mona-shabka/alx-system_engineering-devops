#!/usr/bin/env ruby
# The regular expression that is matches a special pattern
puts ARGV[0].scan(/\[from:(.*?)\]\s\[to:(.*?)\]\s\[flags:(.*?)\]/).join(',')
