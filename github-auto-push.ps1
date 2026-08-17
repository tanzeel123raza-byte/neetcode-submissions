$folder = "C:\Coding\acd_ladders"

$watcher = New-Object System.IO.FileSystemWatcher
$watcher.Path = $folder
$watcher.IncludeSubdirectories = $true
$watcher.EnableRaisingEvents = $true

$action = {
    Start-Sleep -Seconds 2

    Set-Location "C:\Coding\acd_ladders"

    $status = git status --porcelain

    if ($status) {
        git add .
        git commit -m "Auto update $(Get-Date -Format 'yyyy-MM-dd HH:mm:ss')"
        git push origin main
    }
}

Register-ObjectEvent $watcher "Changed" -Action $action
Register-ObjectEvent $watcher "Created" -Action $action
Register-ObjectEvent $watcher "Deleted" -Action $action
Register-ObjectEvent $watcher "Renamed" -Action $action

Write-Host "Watching C:\Coding\acd_ladders"
Write-Host "Press Ctrl+C to stop."

while ($true) {
    Start-Sleep -Seconds 5
}
