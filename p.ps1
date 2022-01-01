param([switch]$c, [switch]$x)

$BIN = "bin"
$OBJ = "obj"
$SRC = "src"
$FN = "main"
$OF = ".obj"
$XF = ".exe"
$LF = ".c"

if ($c -and -not $x)
{
    cl /Fo"$PSScriptRoot\$OBJ\$FN$OF" /Fe"$PSScriptRoot\$BIN\$FN$XF" "$SRC\$FN$LF"
}
elseif ($x -and -not $c)
{
    Start-Process "$PSScriptRoot\bin\$FN$XF"
}
else
{
    Write-Host "One, and only one, of the options MUST be ON."
}