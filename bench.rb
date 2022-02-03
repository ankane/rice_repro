require_relative "hello"

GC.stress = true
hello = Hello.new
hello.world = Hello.new
GC.stress = false
GC.start
p hello.world
