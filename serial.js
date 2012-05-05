// Config
var http = require('http');
var repl = require("repl");
var splib = require("serialport");
var currentColor;

// SerialPort
var sp = require("serialport").SerialPort
var spinstance = new sp("/dev/tty.usbmodem411", {
  parser: splib.parsers.readline("\n")
});

spinstance.on( "data", function( chunk ) {
  currentColor = chunk;
  console.log(currentColor);
});

// Web output
http.createServer(function (req, res) {
  res.writeHead(200, {'Content-Type': 'text/plain'});
  res.end(currentColor);
}).listen(1337, "127.0.0.1");

// Just for you to know
console.log('Checkout the current color at http://127.0.0.1:1337/');
