require_relative "hello"

GC.stress = true
hello = Hello.new
hello.world = 123
GC.stress = false
GC.start
puts "hello"
