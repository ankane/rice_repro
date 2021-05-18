require_relative "hello"

hello = Hello.new
10_000_000.times do
  hello.world
end
