export default function handler(req, res) { res.status(200).json({ status: 'ok', service: 'hybrid-post-quantum-crypto', timestamp: new Date().toISOString() }); }
